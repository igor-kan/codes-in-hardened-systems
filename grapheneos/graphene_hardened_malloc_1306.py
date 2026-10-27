"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1306."""

def spec_graphene_hardened_malloc_1306() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1306, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1306():
    s = spec_graphene_hardened_malloc_1306()
    assert s["spec_id"] == 1306

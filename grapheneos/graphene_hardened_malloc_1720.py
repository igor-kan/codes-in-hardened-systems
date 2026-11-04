"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1720."""

def spec_graphene_hardened_malloc_1720() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1720, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1720():
    s = spec_graphene_hardened_malloc_1720()
    assert s["spec_id"] == 1720

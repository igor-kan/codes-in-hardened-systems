"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1006."""

def spec_graphene_hardened_malloc_1006() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1006, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1006():
    s = spec_graphene_hardened_malloc_1006()
    assert s["spec_id"] == 1006

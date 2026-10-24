"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1072."""

def spec_graphene_hardened_malloc_1072() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1072, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1072():
    s = spec_graphene_hardened_malloc_1072()
    assert s["spec_id"] == 1072
